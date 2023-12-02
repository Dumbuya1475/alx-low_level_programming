#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Fool Bar";
    user.email = "Foolbar.io";
    user.age = 98;
    // printf(user);
    printf("%s", user);
    return (0);
}
