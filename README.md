# gver-cli

![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)

**Gver** is a command-line tool that automatically generates [Semantic Versions](https://semver.org/) for your project by analyzing its Git history.

You can customize Gver's behavior by creating a `gver_version.yaml` configuration file.

## Guide: Running the Project After Cloning

1. **Clone the Repository**
    ```sh
    git clone <repository-url>
    cd <project-directory>
    ```

2. **Build the Project**
    - Make sure you have a C++ compiler and CMake installed.
    - Create a build directory and run CMake:
      ```sh
      mkdir build
      cd build
      cmake ..
      make
      ```

3. **Run the Application**
    - After building, you can run the CLI tool:
      ```sh
      ./gver [options]
      ```

4. **(Optional) Run Tests**
    - If tests are available, you can run them (adjust the command if your project uses a different test framework):
      ```sh
      make test
      ```
      or
      ```sh
      ctest
      ```

> **Note:** For advanced usage and configuration, refer to the rest of this README or the official documentation.


For information on contributing, please refer to the [Contributing Guide](CONTRIBUTING.md).


## Contributors
<!-- readme: contributors -start -->
<table>
	<tbody>
		<tr>
            <td align="center">
                <a href="https://github.com/iskandarem">
                    <img src="https://avatars.githubusercontent.com/u/104186981?v=4" width="100;" alt="iskandarem"/>
                    <br />
                    <sub><b>Iskandar Emomzoda</b></sub>
                </a>
            </td>
		</tr>
	<tbody>
</table>
<!-- readme: contributors -end -->

