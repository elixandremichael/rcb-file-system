#ifndef RCB_FILE_SYSTEM_MESSAGES_H
#define RCB_FILE_SYSTEM_MESSAGES_H

#include <stdio.h>
#include <stdlib.h>

void print_help() {
    printf("    ____  __________ \n"
                   "   / __ \\/ ____/ __ )\n"
                   "  / /_/ / /   / __  |\n"
                   " / _, _/ /___/ /_/ / \n"
                   "/_/ |_|\\____/_____/  \n"
                   "                     \n");
    printf("This is the RCB Filesystem\n\n");
    printf("Arguments:\n");
    printf("--format [device]\t\tFormat a device to the RCBFS\n");
    printf("--enter\t [device]\t\tEnter the device listing files and directories\n");
    printf("--help\t\t\t\t\tDisplay this help message\n");
}

void print_error() {
    printf("⛔ Invalid arguments\n\n");
    printf("Arguments:\n");
    printf("--format [device]\t\tFormat a device to the RCBFS\n");
    printf("--enter\t [device]\t\tEnter the device listing files and directories\n");
    printf("--help\t\t\t\t\tDisplay this help message\n");
}

void print_invalid_device(char* error) {
    printf("%s\n", error);
    printf("To see available devices: lsblk -o NAME,TYPE,SIZE,MODEL\n");
}

void print_navigator_error() {
    printf("⛔ Invalid command\n\n");
    printf("Type 'help' to list available options.\n");
}

void print_navigator_help() {
    printf("Available commands:\n");
    printf("exit\t\t\t\tExit navigator\n");
    printf("pwd\t\t\t\t\tDisplay the current directory path\n");
    printf("ls\t\t\t\t\tList the current directory\n");
    printf("cd [dir]\t\t\tEnter a given directory\n");
    printf("rm [dir|file]\t\tRemove a given directory or file\n");
    printf("info\t\t\t\tDisplay the device information\n");
    printf("help\t\t\t\tDisplay this help message\n");
}

#endif
