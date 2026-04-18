Bank Project OOP
=================

Overview
--------

`Bank Project OOP` is a small, console-based banking system implemented in C++ using object-oriented programming concepts. The project demonstrates class design for users and clients, basic input validation, a login screen, and a simple interactive menu for banking operations.
Key Concepts
------------

- Encapsulation and class design
- Basic input validation and utilities
- Simple console user interface (login loop and menu)
- Date and string helper utilities

Features
--------

- User login screen (`clsLoginScreen`) with a loop in `Bank Project OOP.cpp`
- Bank user management (`clsBankUsers`)
- Bank client model (`clsBankClient`)
- Utility helpers: `clsUtil`, `clsString`, `clsDate`

Repository Structure
--------------------

- `Bank Project OOP.cpp` - program entry point, runs the login loop
- `clsLoginScreen.*` - login screen handling
- `clsBankUsers.*` - bank users management
- `clsBankClient.*` - client model and operations
- `clsTransactionMenue.*` - transaction menu UI
- `clsMainScreen.*` - main application menu
- `clsUtil.*`, `clsString.*`, `clsDate.*`, `clsIsInputValidate.*` - helper utilities

Requirements
------------

- C++ compiler (MSVC via Visual Studio or GCC/MinGW)
- Tested with Visual Studio (any recent version) and MSVC toolchain

Usage
-----

- The application starts at the login screen. Enter credentials to authenticate.
- After login, navigate the displayed menus to perform client/banking operations.
- The main loop will repeat the login screen until you choose to exit.

Extending the Project
---------------------

- Add persistent storage (file or database) to save clients and transactions.
- Implement more robust authentication and permission roles.
- Add unit tests for core logic and validation functions.

Contributing
------------

Contributions are welcome. Please fork the repository, make changes on a feature branch, and submit a pull request with a short description of your change.

  
- Input validation (`clsIsInputValidate`)
- Transaction and main menu screens (`clsTransactionMenue`, `clsMainScreen`)
