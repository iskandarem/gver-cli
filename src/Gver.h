#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

class Gver
{
private:
    struct CommandResult
    {
        std::string output;
        int exitCode;
    };
    
public:
    static void print_usage();
    void calNext(const char* cmd);
    Gver(/* args */) = default;
    ~Gver() = default;
};


void Gver::print_usage()
{
    std::cout << "Usage: git-semver [options]\n\n" << "A tool to automatically generate semantic versions from Git commit history.\n" <<
        "It analyzes commit messages (following Conventional Commits or similar rules)\n" <<
        "to determine whether to bump the major, minor, or patch version.\n\n" <<

        "Options:\n" <<
        "  --help, -h        Show this help message and exit\n" <<
        "  --version, -v     Show the current version of git-semver\n" <<
        "  --init            Initialize semantic version tracking (e.g., starting at 0.1.0)\n" <<
        "  --tag             Create a Git tag for the new version\n\n" <<

        "Examples:\n\n" <<

        "  git-semver --tag\n" <<
        "    → Tags the repository with the next semantic version\n\n" <<

        "Conventional Commits:\n" << 
        "  This tool uses the commit message format:\n" << 
        "    feat: A new feature → bumps MINOR\n" << 
        "    fix: A bug fix      → bumps PATCH\n" <<
        "    BREAKING CHANGE:    → bumps MAJOR\n" << std::endl;

}

inline void Gver::calNext(const char* cmd = "git log")
{

    std::array<char, 128> buffer;
    std::string result;

    // Open the pipe
    FILE* pipe = popen(cmd, "r");
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }

    // Read output
    while (fgets(buffer.data(), buffer.size(), pipe) != nullptr) {
        result += buffer.data();
    }

    // Get exit status
    int returnCode = pclose(pipe);
    int exitCode = WIFEXITED(returnCode) ? WEXITSTATUS(returnCode) : -1;

    // return { result, exitCode };
}
