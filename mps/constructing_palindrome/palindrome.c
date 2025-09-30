#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Check if a String is a Palindrome
// Problem: Write a funciton that takes a string as input and checks if
// it is a palindrome (ignore spaces, punctuation, and case sensitivity

int isPal(char *thisString){
  size_t length = strlen(thisString);
  int midVal, index = 0;

  if (length % 2 == 0){
    midVal = length / 2;
  } else {
    midVal = (length + 1)/2;
  }

  while (index < midVal){
    if (thisString[index] != thisString[length-index-1]){
      return -1;
    }
    index += 1;
  }
  return 1;
}

// 2. Generate a Palindrome from a Given String
// Problem: Given a string, create the smallest palindrome possible by
// adding characters at the end of the string.

void genPal(char *thisString){

  continue;

}

// 3. Count the Number of Palindromes in a String
// Problem: Given a string, count how many substrings of that string are
// palindromes. e.g "ababa", palindromes are a, b, a, b, a, aba, babab
// and ababa. So the count is 7.

//int countPal(char *thisString)

// 4. Find the Longest Palindromic Substring
// Problem: Given a string, find the longest palindromic substring
// within it. e.g "babad", the longest palindromic substring could be
// "bab" or "aba"

//char longestPal(char *thisString)

// 5. Min Insertions to Make a String a Palindrome
// Problem: Given a string, find the minimum number of inserions needed
// to make the string a palindrome.
// e.g. "abca", output 1 (Insert "b" at the end to make it "abcba")

//int minInt(char *thisString)

// 6. Palindrome Subsequences
// Problem: Given a string, count how many palindromic subsequences exist.
// A subsequence is formed by deleting some (or no) characters without
// changing the order of the remaining characters.
// e.g. "ababa", palindromic subsequences include "a", "b", "aba", "bab"

//void palSub(char *thisString)

// 7. Palindrome with multiple reversals
// Problem: Given a string, find how many times you must reverse its
// subsrting to form a palindrome.

//void palRev(char *thisString)



int main(int argc, char **argv){
  char thisWord[100];
  scanf("%s", thisWord);

  if (isPal(thisWord) == 1){
    printf("This %s is a palindrome! \n", thisWord);
  } else {
    printf("This %s is not a palindrome! \n", thisWord);
  }

  genPal(thisWord);

  return 0;
}



