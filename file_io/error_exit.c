#include "main.h"

/**
 * error_exit - Handles error messages and exits with a specific code.
 * @exit_code: The exit code.
 * @message: The error message to print.
 * @file_name: The file name to include in the error message.
 */
void error_exit(int exit_code, const char *message, const char *file_name)
{
    if (file_name)
        dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
    else
        dprintf(STDERR_FILENO, "%s\n", message);

    exit(exit_code);
}
