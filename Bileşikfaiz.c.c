#include <stdio.h>

void inputs_Variables(float *l_amount, float *i_rate, int *m_year, int *m_month, int *It_interval)
{

printf("......................................................................................................................\n");
printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.Welcome to Interest Calculator*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.\n");
printf("......................................................................................................................\n");

    while(1)
    {

        printf("\nPlease Enter your name: ");
        char name[50];
        scanf("%s", name);
        
        printf("Yillik faiz orani giriniz: ");
        if(!scanf("%f", i_rate))
        {
            printf("Hatali giris yaptiniz!\n");
            fflush(stdin);
            continue;
        }

        printf("Kredi tutari giriniz: ");
        if(!scanf("%f", l_amount))
        {
            printf("Hatali giris yaptiniz!\n");
            fflush(stdin);
            continue;
        }

        printf("Maksimum Yil: ");
        if(!scanf("%d", m_year))
        {
            printf("Hatali giris yaptiniz!\n");
            fflush(stdin);
            continue;
        }

        printf("Maksimum Ay:");
        if(!scanf("%d", m_month))
        {
            printf("Hatali giris yaptiniz!\n");
            fflush(stdin);
            continue;
        }

        printf("Yineleme araligi:");
        if(!scanf("%d", It_interval))
        {
            printf("Hatali giris yaptiniz!\n");
            fflush(stdin);
            continue;
        }
        break;
    }
}

void print_duration(int ay)
{
    int year = ay / 12;
    int kalan_month = ay % 12;
    printf("-----------------\n");
    printf("year: %d, month: %d\n", year, kalan_month);
}

void print_money(float para)
{
    float yeni_sayi = (int)(para * 10) / 10.0;
    printf("%.1f$\n", yeni_sayi);
}

void print_entry(float loan_amount, float int_rate, int month)
{
    float ToplamFaiz = loan_amount + ((loan_amount / 100) * (int_rate / 12) * month);
    float per_month = ToplamFaiz / month;
    print_duration(month);
    printf("total payment:\n");
    print_money(ToplamFaiz);
    printf("month payment:\n");
    print_money(per_month);
    printf("-----------------\n");
}

void print_full_report(float loan_amount, float int_rate, int max_year, int max_month, int Iteration_interval)
{
    int step = Iteration_interval;
    int kac_ay = (max_year * 12) + max_month;

    while (step <= kac_ay)
    {
        print_entry(loan_amount, int_rate, step);
        step += Iteration_interval;
    }
}
int main()
{
    float loan_amount;
    float int_rate;
    int max_year;
    int max_month;
    int Iteration_interval;

    while(1)
    {
        inputs_Variables(&loan_amount, &int_rate, &max_year, &max_month, &Iteration_interval);
        print_full_report(loan_amount, int_rate, max_year, max_month, Iteration_interval);
    }
    return 0;
}

