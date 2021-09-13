class Solution {

public :

    int lengthOfLastWord ( string s ) {
        const auto IsSpace = [](const char c) { return isspace(c); };
        const auto it = find_if_not(s.rbegin(), s.rend(), IsSpace);
        const auto jt = find_if(it, s.rend(), IsSpace);

        return distance(it, jt);
    }
};
