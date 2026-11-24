
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee managers[2] = {
        {101, "Amit", 50000},
        {102, "Neha", 60000}
    };

    struct Employee workers[2] = {
        {201, "Ravi", 20000},
        {202, "Karan", 25000}
    };

    FILE *fp;

    // Text file for managers
    fp = fopen("managers.txt", "w");
    for (int i = 0; i < 2; i++)
        fprintf(fp, "%d %s %.2f\n",
                managers[i].id,
                managers[i].name,
                managers[i].salary);
    fclose(fp);

    // Text file for workers
    fp = fopen("workers.txt", "w");
    for (int i = 0; i < 2; i++)
        fprintf(fp, "%d %s %.2f\n",
                workers[i].id,
                workers[i].name,
                workers[i].salary);
    fclose(fp);

    // Binary file for managers
    fp = fopen("managers.dat", "wb");
    fwrite(managers, sizeof(struct Employee), 2, fp);
    fclose(fp);

    // Binary file for workers
    fp = fopen("workers.dat", "wb");
    fwrite(workers, sizeof(struct Employee), 2, fp);
    fclose(fp);

    printf("Data stored in separate files.");

    return 0;
}
