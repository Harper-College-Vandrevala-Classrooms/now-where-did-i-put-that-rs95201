#include "find.hpp"
#include <string>

int find(const std::string & str, const char & ch) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1; 
}

int find(const std::string & str, const std::string & substr) {
    for (int i = 0; i <= str.length(); ++i) { 
        if (str[i] == substr[0]) {
            int j = 1;
            while (j < substr.length() && str[i+j] == substr[j]) {
                j++;
            }
            if (j == substr.length()) {
                return i;
            }
        }
    }
    return -1; 
}
