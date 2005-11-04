//: cpptest.h
//: C++ port for Perl's Test::More module
//: v0.01
//: Copyright (c) Agent Zhang
//: 2005-10-13 2005-10-15

#ifndef _CPPTEST_H_
#define _CPPTEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ok(a) \
    Ok(__FILE__, __LINE__, a, "");

#define ok_(a, info) \
    Ok(__FILE__, __LINE__, a, info);

#define is(a,b) \
    Is(__FILE__, __LINE__, a, b, "");

#define is_(a,b,info) \
    Is(__FILE__, __LINE__, a, b, info);

#define isnt(a,b) \
    Isnt(__FILE__, __LINE__, a, b, "");

#define isnt_(a,b,info) \
    Isnt(__FILE__, __LINE__, a, b, info);

long Count = 0;
long Total = 0;
long ErrorCount = 0;
long SkipCount = 0;
long TodoCount = 0;

void test_plan(long total) {
    Total = total;
    printf("1..%d\n", Total);
    fflush(stdout);
}

void summary(void) {
    if (Count < Total) {
        fprintf(stderr, "# Looks like you planned %ld tests but only ran %ld.\n",
            Total, Count);
    } else {
        //...
        fprintf(stderr, "For total %ld tests\n");
    }
}

void Ok(const char* fname, long lineno, int a, const char* info) {
    ++Count;
    if (a) {
        if (strcmp(info, "") == 0)
            printf("ok %d\n", Count);
        else
            printf("ok %d - %s\n", Count, info);
        fflush(stdout);
    } else {
        if (strcmp(info, "") == 0)
            printf("not ok %d\n", Count);
        else
            printf("not ok %d\n", Count);
        fflush(stdout);
        fprintf(stderr, "#     Failed test (%s at line %d)\n",
            fname, lineno);
        fflush(stderr);
    }
}

void Is(const char* fname, long lineno,
        const char* a, const char* b, const char* info) {
    ++Count;
    if (strcmp(a, b) == 0) {
        if (strcmp(info, "") == 0)
            printf("ok %d\n", Count);
        else
            printf("ok %d - %s\n", Count, info);
        fflush(stdout);
    } else {
        if (strcmp(info, "") == 0)
            printf("not ok %d\n", Count);
        else
            printf("not ok %d - %s\n", Count, info);
        fflush(stdout);
        fprintf(stderr, "#     Failed test (%s at line %d)\n"
               "#          got: '%s'\n"
               "#     expected: '%s'\n",
               fname, lineno, a, b);
        fflush(stderr);
    }
}

// void is(double), is(float), is(int), is(short), is(long)

void Isnt(const char* fname, long lineno,
        const char* a, const char* b, const char* info) {
    ++Count;
    if (strcmp(a, b) != 0) {
        if (strcmp(info, "") == 0)
            printf("ok %d\n", Count);
        else
            printf("ok %d - %s\n", Count, info);
        fflush(stdout);
    } else {
        if (strcmp(info, "") == 0)
            printf("not ok %d\n", Count);
        else
            printf("not ok %d - %s\n", Count, info);
        fflush(stdout);
        fprintf(stderr, "#     Failed test (%s at line %d)\n"
               "#     '%s'\n"
               "#         ne\n"
               "#     '%s'\n",
               fname, lineno, a, b);
        fflush(stderr);
    }
}

#endif  // _CPPTEST_H_
