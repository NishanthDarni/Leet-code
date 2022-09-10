class Solution
{
public:
    int value = 0;
    int romanToInt(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                value -= 1;
            }
            else if (s[i] == 'I')
            {
                value += 1;
            }
            else if (s[i] == 'V')
            {
                value += 5;
            }
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                value -= 10;
            }
            else if (s[i] == 'X')
            {
                value += 10;
            }
            else if (s[i] == 'L')
            {
                value += 50;
            }
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                value -= 100;
            }
            else if (s[i] == 'C')
            {
                value += 100;
            }
            else if (s[i] == 'D')
            {
                value += 500;
            }
            else if (s[i] == 'M')
            {
                value += 1000;
            }
        }
        return value;
    }
};
