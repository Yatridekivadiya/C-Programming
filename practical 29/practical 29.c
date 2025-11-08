#include <stdio.h>
#include <string.h>


struct Coach {
    char name[50];
    int age;
    int experience;
};


struct Team {
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

int main() {
    struct Team teams[100];
    int n = 0, choice;
    char searchName[50];

    while (1) {
        printf("\n===== Sports Team Management System =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Search Team by Sport Type\n");
        printf("4. Display All Teams\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("\nEnter Team Name: ");
                gets(teams[n].teamName);

                printf("Enter Sport Type: ");
                gets(teams[n].sportType);

                printf("Enter Coach Name: ");
                gets(teams[n].coach.name);

                printf("Enter Coach Age: ");
                scanf("%d", &teams[n].coach.age);

                printf("Enter Coach Experience (in years): ");
                scanf("%d", &teams[n].coach.experience);
                getchar();

                n++;
                printf("Team added successfully!\n");
                break;

            case 2:
                printf("\nEnter Team Name to Search: ");
                gets(searchName);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0) {
                        printf("\n--- Team Found ---\n");
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach: %s, Age: %d, Experience: %d years\n",
                               teams[i].coach.name, teams[i].coach.age, teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Team not found!\n");
                break;

            case 3:
                printf("\nEnter Sport Type to Search: ");
                gets(searchName);
                found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(teams[i].sportType, searchName) == 0) {
                        printf("\n--- Team Found ---\n");
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach: %s, Age: %d, Experience: %d years\n",
                               teams[i].coach.name, teams[i].coach.age, teams[i].coach.experience);
                        found = 1;
                    }
                }
                if (!found)
                    printf("No team found for this sport!\n");
                break;

            case 4:
                printf("\n===== All Teams and Coach Details =====\n");
                for (int i = 0; i < n; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Coach Experience: %d years\n", teams[i].coach.experience);
                }
                if (n == 0)
                    printf("No teams added yet!\n");
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    printf("This program is developed by yatri dekivadiya");
    return 0;
}
