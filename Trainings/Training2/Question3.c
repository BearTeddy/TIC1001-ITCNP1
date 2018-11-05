#include <stdbool.h>
bool is_vowel(char c) {

    c= tolower(c);

    return c=='a' || c== 'e' || c=='i' || c=='o' || c=='u';

}

