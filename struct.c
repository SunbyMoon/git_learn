#include <stdio.h>
/* obtain the average score of every subject presented by the struct */
main()
{
    struct date
    {   
	    int year;
	    int month;
	    int day;
    };
    typedef struct date DATE;
    struct STUDENT
    {
	    int	studentID;
	    char	studentName[10];
	    char	studentSex[4];
	    DATE birthday; 
	    int	scoreComputer;
	    int	scoreEnglish;
	    int	scoreMath;
	    int scoreMusic;
    };

	struct STUDENT stu[30] =
	{
	{1, "Lin", "f", {1998,12,20}, 90, 80, 70, 88},
	{2, "John", "m", {1999,10,12}, 99, 89, 60, 79}
	};
	
	struct STUDENT *pt;
	float sum[4] = {0.0}, average[4] = {0.0};
	int i;
	char *name[] = {"score of Computer", "score of English", "score of Math", "score of Music"};
	
	pt = stu;
	for (pt = stu; pt < stu + 30; pt++)
    {
		sum[0] = sum[0] + pt -> scoreComputer;
		sum[1] = sum[1] + pt -> scoreEnglish;
		sum[2] = sum[2] + pt -> scoreMath;
		sum[3] = sum[3] + pt -> scoreMusic;
    }      
	for (i = 0; i < 4; i++)
	{
		average[i] = sum[i]/2;
		printf("%20s : %4.2f\n", name[i], *(average+i));
	}
}
