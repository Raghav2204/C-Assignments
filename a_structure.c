#include<string.h>
int main()
{
    struct eceA
    {
        int roll_num;
        char name[100];
        char gender;
    };

    struct eceA hriddhi,raghav,garvita,abhinav,saket,purnima;

    strcpy(hriddhi.name,"Hriddhi Srivastava");
    hriddhi.roll_num=39;
    hriddhi.gender='F';
    printf("Name:%s\n",hriddhi.name);
    printf("Roll Number:%d\n",hriddhi.roll_num);
    printf("Gender:%c\n",hriddhi.gender);
    printf("\n");

    strcpy(raghav.name,"Raghav Aggarwal");
    raghav.roll_num=05;
    raghav.gender='M';
    printf("Name:%s\n",raghav.name);
    printf("Roll Number:%d\n",raghav.roll_num);
    printf("Gender:%c\n",raghav.gender);
    printf("\n");

    strcpy(garvita.name,"Garvita Srivatava");
    garvita.roll_num=26;
    garvita.gender='F';
    printf("Name:%s\n",garvita.name);
    printf("Roll Number:%d\n",garvita.roll_num);
    printf("Gender:%c\n",garvita.gender);
    printf("\n");

    strcpy(abhinav.name,"Abhinav");
    abhinav.roll_num=29;
    abhinav.gender='M';
    printf("Name:%s\n",abhinav.name);
    printf("Roll Number:%d\n",abhinav.roll_num);
    printf("Gender:%c\n",abhinav.gender);
    printf("\n");

    strcpy(saket.name,"Saket Maurya");
    saket.roll_num=25;
    saket.gender='M';
    printf("Name:%s\n",saket.name);
    printf("Roll Number:%d\n",saket.roll_num);
    printf("Gender:%c\n",saket.gender);
    printf("\n");

    strcpy(purnima.name,"Purnima Agnihotri");
    purnima.roll_num=52;
    purnima.gender='F';
    printf("Name:%s\n",purnima.name);
    printf("Roll Number:%d\n",purnima.roll_num);
    printf("Gender:%c\n",purnima.gender);
    printf("\n");

    return 0;

}
