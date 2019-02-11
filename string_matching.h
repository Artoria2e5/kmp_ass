#ifndef STRING_MATCHING_H
#define STRING_MATCHING_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int string_matching_naive(const char *text, int N, const char* pattern, int M);
int string_matching_kmp(const char *text, int N, const char* pattern, int M);

int *overlap_array(const char* pattern, int M);
void print_array(const int *arr, int size);

#endif