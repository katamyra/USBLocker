#include "CLI/CLI.hpp"

int main(int argc, char **argv) {
    CLI::App app;

    bool my_flag{false};

    app.add_flag("-f", my_flag, "Optional Description");

    auto encrypt = app.add_subcommand("encrypt", "Encrypt a file");

    encrypt->callback(
        [&]() {
            std::cout << "Encrypting file currently!" << std::endl;
        }
    );
    CLI11_PARSE(app, argc, argv);

    return 0;

}   