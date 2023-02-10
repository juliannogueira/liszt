#pragma once
#ifndef INSTALL_H
#define INSTALL_H
/*
 * install.h holds the function declarations
 * for installing the necessary ~/.liszt directory
 * system. See install.c for the function definitions
 */


/* 
 * Creates data_file.json inside the user's ~/.liszt/background directory.
 * Creates default.txt inside the user's ~/.liszt/notes directory
 * Returns 0 if successful, -1 if not.
 */
int errorHelper();

int makeFiles();

/*
 * Function which helps to reuse code in makeFiles() function
 */
void str_append(char* destination_str, const char* str, const char* appendant);

/*
 * Helper that makes an individual directory and returns -1 if it fails to do so
 */
int makeDir();

/*
 * Makes an empty dot directory called liszt in the user's home directory. Inside that directory,
 * creates three directories: "notes", "archive_notes", and "background". Note files are stored in
 * either "notes" or "archive_notes", while data_file.json is stored in "background".
 * Returns 0 if successful, -1 if not.
 */
int makeDirectories();


/*
 * Sets up the necessary Liszt directory system and files 
 * on the user's machine 
 * Returns 0 if successful, -1 if not.
 */
int install();

#include "install.c"
#endif

