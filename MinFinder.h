#pragma once

template <typename Type1, typename Type2>
class MinFinder {
public:
    MinFinder(Type1 a, Type2 b) : num1(a), num2(b) {}

    Type1 Min() const
    {
        if (num1 < num2)
        {
            return num1;
        }
        return num2;
    }

private:
    Type1 num1;
    Type2 num2;
};


