#include<stdio.h>

struct st {
        int a;
        float b;
        char name[20];
};

int main()
{
	struct st t;
        struct st s = {
                .a = 2,
                .b = 4.5,
                .name = "linux"
        };

	t.a = 5;
	t.b = 10.6;

        printf("The size of struct is %ld \n", sizeof(s));
        printf("s.a -> %d, t.a -> %d \n", s.a, t.a);
        printf("s.b -> %f, t.b -> %f \n", s.b, t.b);
        printf("s.name -> %s \n", s.name);

        return 0;

}
