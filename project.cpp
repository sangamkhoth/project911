#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMBERS 100
#define MAX_NAME_LEN 50

struct Member {
    char name[MAX_NAME_LEN];
    int age;
    float weight;
    float height;
};

struct Member members[MAX_MEMBERS];
int num_members = 0;

void add_member() {
    if (num_members >= MAX_MEMBERS) {
        printf("Error: maximum number of members reached\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", members[num_members].name);

    printf("Enter age: ");
    scanf("%d", &members[num_members].age);

    printf("Enter weight (kg): ");
    scanf("%f", &members[num_members].weight);

    printf("Enter height (m): ");
    scanf("%f", &members[num_members].height);

    num_members++;
}

void view_member(int index) {
    struct Member *member = &members[index];

    printf("Name: %s\n", member->name);
    printf("Age: %d\n", member->age);
    printf("Weight: %.2f kg\n", member->weight);
    printf("Height: %.2f m\n", member->height);
}

void list_members() {
    if (num_members == 0) {
        printf("No members\n");
        return;
    }

    printf("Members:\n");

    for (int i = 0; i < num_members; i++) {
        printf("%d. %s\n", i + 1, members[i].name);
    }

    printf("\n");
}

int main() {
    int choice = 0;

    do {
        printf("Fitness Club Management System\n");
        printf("1. Add member\n");
        printf("2. View member\n");
        printf("3. List members\n");
        printf("4. Quit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_member();
                break;
            case 2:
                list_members();
                printf("Enter member index: ");
                scanf("%d", &choice);

                if (choice >= 1 && choice <= num_members) {
                    view_member(choice - 1);
                } else {
                    printf("Error: invalid member index\n");
                }

                break;
            case 3:
                list_members();
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Error: invalid choice\n");
                break;
        }

        printf("\n");
    } while (choice != 4);

    return 0;
}
