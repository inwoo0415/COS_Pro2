#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int member_age[], int member_age_len, const char* transportation)
{
    int answer = 0;
    int adult_pay = 0; int children_pay = 0;
    for (int i = 0; i < member_age_len; i++)
    {
        if (transportation == "Bus")
        {
            if (member_age[i] > 20)
            {
                adult_pay += 40000;
            }
            else
            {
                children_pay += 15000;
            }
        }
        else if (transportation == "Ship")
        {
            if (member_age[i] > 20)
            {
                adult_pay += 30000;
            }
            else
            {
                children_pay += 13000;
            }
        }
        if (transportation == "Airplane")
        {
            if (member_age[i] > 20)
            {
                adult_pay += 70000;
            }
            else
            {
                children_pay += 45000;
            }
        }
    }

    if (member_age_len >= 10)
    {
        answer = ((adult_pay * 0.9) + (children_pay * 0.8));
    }
    else
    {
        answer = adult_pay + children_pay;
    }

    return answer;
}

int main()
{
    int member_age1[5] = { 13,33,45,11,20 };
    int member_age1_len = 5;
    const char* transportation1 = "Bus";
    int ret1 = solution(member_age1, member_age1_len, transportation1);
    printf("solution 함수의 반환 값은 %d 입니다. \n", ret1);

    int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
    int member_age2_len = 10;
    const char* transportation2 = "Ship";
    int ret2 = solution(member_age2, member_age2_len, transportation2);
    printf("solution 함수의 반환 값은 %d 입니다. \n", ret2);

    return 0;
}