# ft_printf Project

This repository contains the code developed at 42 Porto for the ft_printf Project.

## 📓 Project Overview

The ft_printf Project at 42 Porto involves implementing a simplified version of the `printf` function in C. The project covers various conversions such as characters, strings, pointers, decimals, integers, unsigned decimals, and hexadecimals, along with the percent sign (`%`). The main goal is to create a function named `ft_printf` capable of handling these conversions.

## ⚡ Function Prototypes

### 🏅 Mandatory Part

#### `ft_printf.c`

- **`ft_printf`**: The main function responsible for handling the formatted output.

#### `ft_printf_utils.c`

- **`check_argument`**: Verifies and processes different types of arguments, including characters, strings, pointers, decimals, integers, unsigned decimals, hexadecimals, and the percent sign.

#### `ft_args_csp.c`

- **`ft_putchar_count`**: Handles the `%c` conversion, printing a single character.
- **`ft_putstr_count`**: Handles the `%s` conversion, printing strings.
- **`ft_putptr_count`**: Handles the `%p` conversion, printing pointers.
- **`ft_ptrlen`**: Returns the length of a pointer.
- **`ft_putptr`**: Prints a pointer in hexadecimal.

#### `ft_args_diu.c`

- **`ft_putnbr_count`**: Handles the `%d` and `%i` conversions, printing decimals and integers.
- **`ft_put_unsignedint_count`**: Handles the `%u` conversion, printing unsigned decimals.
- **`ft_numlen`**: Returns the length of an unsigned integer.
- **`ft_uitoa`**: Implements a variation of the `itoa` function for unsigned integers.

#### `ft_args_xXpercent.c`

- **`ft_puthex_count`**: Handles the `%x` and `%X` conversions, printing lowercase and uppercase hexadecimals.
- **`ft_hexlen`**: Returns the length of a hexadecimal number.
- **`ft_puthex`**: Prints a hexadecimal number.
- **`ft_putpercent`**: Handles the `%%` conversion, printing a percent sign.

#### `libft_functions.c`

- **`ft_putchar_fd`**: Outputs a character to the given file descriptor.
- **`ft_itoa`**: Allocates and returns a string representing the given integer.
- **`absolute_value`**: An auxiliary function for `ft_itoa`.
- **`ft_digit_count`**: An auxiliary function for `ft_itoa`.

## 📝 Tester

- **printfTester**: A tester for verifying the correctness of the implemented `ft_printf` function.

## 🚀 Getting Started

To use this ft_printf implementation, follow these steps:

1. Clone the repository: `git clone https://github.com/abaltazarpinto/ft_printf.git`
2. Compile the project: `make`
3. Run the tester: `./printfTester`

## 📄 License

This project is licensed under the terms of the [MIT License](LICENSE).

---

Feel free to customize the README according to your preferences and add more sections if needed. Make sure to update placeholders like `your-username` and include a proper license file if required.
