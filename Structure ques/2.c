#include<stdio.h>

struct salary {
    float basic;
    float hra;
    float da;
    float total;
};

struct employee {
    int id;
    char name[10];
    struct salary s;
};

int main() {
    int n;
    scanf("%d", &n);

    struct employee a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %s %f %f %f", &a[i].id, a[i].name,
              &a[i].s.basic, &a[i].s.da, &a[i].s.hra);

        a[i].s.total = a[i].s.basic + a[i].s.da + a[i].s.hra;
    }

    // Find maximum salary
    float max = a[0].s.total;

    for(int i = 1; i < n; i++) {
        if(a[i].s.total > max) {
            max = a[i].s.total;
        }
    }

    // Print employee(s) with highest salary
    for(int i = 0; i < n; i++) {
        if(a[i].s.total == max) {
            printf("Name: %s\n", a[i].name);
            printf("Highest salary: %.2f\n", a[i].s.total);
        }
    }

    return 0;
}