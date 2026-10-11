// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
// Problem     Sum and Difference of Two Numbers
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 08:27 p.m.
// Technique   standard-io-formatted-arithmetic
// Time        O(1)
// Space       O(1)
// Insight     The program performs basic arithmetic operations on integer and floating-point variables while utilizing format specifiers to control precision and output layout.
// Interview   Before: "How do you handle mixed data types and output formatting in C?" After: "I use scanf for input and printf with format specifiers like %.1f to ensure O(1) time and space complexity while meeting the specific rounding requirements for floating-point results."
// Pitfalls    (1) Failing to use the %.1f format specifier results in default precision, which violates the requirement to round to one decimal place.  (2) Omitting the ampersand operator in scanf causes undefined behavior because the function requires the memory address of the variables.  (3) Using integer division or incorrect format specifiers for float variables leads to precision loss or incorrect output formatting.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int1, int2;
    float float1, float2;
    
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    printf("%d %d\n", int1 + int2, int1 - int2);
    printf("%.1f %.1f", float1 + float2, float1- float2);
    
    return 0;
}
