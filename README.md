# 🛠️ Makefile Generator

<div align=center>

[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)

[![forthebadge](https://forthebadge.com/images/badges/built-by-codebabes.svg)](https://forthebadge.com)

[![forthebadge](https://forthebadge.com/images/badges/60-percent-of-the-time-works-every-time.svg)](https://forthebadge.com)

</div>

A command-line tool to generate Makefiles based on user input.

## 💻 Installation

To install the Makefile Generator and make it accessible globally, follow these steps:

1. Clone the repository:

```shell
git clone https://github.com/angelamcosta/makefile_generator.git
```

2. Navigate to the project directory:

```shell
cd makefile_generator
```

3. Build the project:

```shell
make
```

4. Move the generated binary to your bin directory (e.g., `/usr/local/bin`):

```shell
sudo mv makegen /usr/local/bin
```

***Note:*** You may need administrator (***sudo***) privileges to move the binary to the system bin directory.

By default, the generated Makefile includes the following rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`. You can modify and customize these rules according to your project's specific requirements, just take a look at `MakefileGenerator.h` and check out the macros.

Certainly! Adding emojis to your headers can add a touch of visual appeal and make your README more engaging. Here's an updated version of the dependencies section with emojis added to the headers:

## 🔗 Dependencies

If you don't have `g++`, you can use the following command to install it:

```shell
sudo apt-get install g++
```

## 🚀 Usage

Once the Makefile Generator is installed, you can use it by executing the following command:

```shell
makegen
```

The tool will prompt you to provide the necessary information, such as the project name, programming language (C/C++), and file names. Follow the instructions and enter the required details.

After the input is provided, the tool will generate a Makefile based on your inputs in the current directory.

Make sure to modify the generated Makefile according to your project's specific requirements.

## ⏳ Upcoming Features

- Support for additional programming languages
- Error safeguarding to handle incorrect user inputs

## 🗑️ Uninstall

To uninstall makegen from you system, follow these steps:

1. Navigate to the directory where you've moved the binary to (in the example abovce we used `/usr/local/bin`):

```shell
cd /usr/local/bin
```

2. Remove the `makegen` binary using the following command:

```shell
rm makegen 
```

## 🙌 Contributing

This project was primarily created for personal use to make my life easier (and learn C++ while at it 😅), but contributions are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue or submit a pull request.

## 📄 License

This project is licensed under the [MIT License](LICENSE).
