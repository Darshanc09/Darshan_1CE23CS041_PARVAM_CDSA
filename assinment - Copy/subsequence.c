#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isSubSeqRec(const char* s1, const char* s2, int m, int n)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (s1[m - 1] == s2[n - 1])
        return isSubSeqRec(s1, s2, m - 1, n - 1);
    return isSubSeqRec(s1, s2, m, n - 1);
}
bool isSubSeq(const char* s1, const char* s2)
{
    int m = strlen(s1);
    int n = strlen(s2);
    if (m > n) return false;
    return isSubSeqRec(s1, s2, m, n);
}

int main()
{
    const char* s1 = "axc";
    const char* s2 = "ahbgdc";
    isSubSeq(s1, s2) ? printf("true\n") : printf("false\n");
    return 0;
}
