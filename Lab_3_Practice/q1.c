#include <stdio.h>
#include <string.h>

int main() {
    // 5 raw input lines directly from the dataset
    char lines[5][150] = {
        "Rezwanur Rahman Ruben $ 010201      $ Nazir Ghat, Khulna  $  CSE $ 3.81",
        "Ahmed Shah Mashiyat $ 010203       $ Nirala, Khulna   $   CSE $ 3.76",
        "Manishankar Mondal $ 010205        $ Alkatra mill, Khulna   $   CSE $ 3.83",
        "Mr. unknown in math $ 271201 $ Nirala, Khulna $ Math $ 3.87",
        "Mr. unknown in physics $ 271701  $ Nirala, Khulna $ Physics $ 3.82"
    };

    // Parallel arrays to hold the parsed data items
    char names[5][50];
    char rolls[5][20];
    char addresses[5][50];
    char disciplines[5][20];
    char cgpa_strings[5][10];

    // Counters for the questions
    int batch_01_count = 0;
    int batch_27_count = 0;
    int cse_count = 0;
    int cgpa_at_least_250 = 0;

    // --- STEP 1: PARSE AND TRIM DATA USING STRING.H ---
    for (int i = 0; i < 5; i++) {
        int line_idx = 0;
        int element = 0; // 0=Name, 1=Roll, 2=Address, 3=Discipline, 4=CGPA
        char temp[100];
        int temp_idx = 0;

        // Loop through each character of the raw string line
        while (1) {
            char ch = lines[i][line_idx];

            if (ch == '$' || ch == '\0') {
                temp[temp_idx] = '\0'; // Null-terminate current segment

                // Trim leading spaces
                int start = 0;
                while (temp[start] == ' ' || temp[start] == '\t') {
                    start++;
                }

                // Trim trailing spaces using strlen() from string.h
                int end = strlen(temp) - 1;
                while (end >= start && (temp[end] == ' ' || temp[end] == '\t' || temp[end] == '\r' || temp[end] == '\n')) {
                    end--;
                }

                // Copy clean segment into the respective parallel array
                int dest_idx = 0;
                for (int k = start; k <= end; k++) {
                    if (element == 0) names[i][dest_idx++] = temp[k];
                    else if (element == 1) rolls[i][dest_idx++] = temp[k];
                    else if (element == 2) addresses[i][dest_idx++] = temp[k];
                    else if (element == 3) disciplines[i][dest_idx++] = temp[k];
                    else if (element == 4) cgpa_strings[i][dest_idx++] = temp[k];
                }

                // Properly close our newly populated target strings
                if (element == 0) names[i][dest_idx] = '\0';
                if (element == 1) rolls[i][dest_idx] = '\0';
                if (element == 2) addresses[i][dest_idx] = '\0';
                if (element == 3) disciplines[i][dest_idx] = '\0';
                if (element == 4) cgpa_strings[i][dest_idx] = '\0';

                temp_idx = 0;
                element++;

                if (ch == '\0') break; // Row parsing complete
            } else {
                temp[temp_idx++] = ch;
            }
            line_idx++;
        }
    }

    // --- STEP 2: EVALUATE RESULTS USING STRING.H FUNCTIONS ---
    for (int i = 0; i < 5; i++) {
        // 1. Count Batch: Examine the first 2 characters of the roll array
        if (rolls[i][0] == '0' && rolls[i][1] == '1') {
            batch_01_count++;
        } else if (rolls[i][0] == '2' && rolls[i][1] == '7') {
            batch_27_count++;
        }

        // 2. Count CSE Discipline: Direct string comparison using strcmp()
        if (strcmp(disciplines[i], "CSE") == 0) {
            cse_count++;
        }

        // 3. Count CGPA >= 2.50: Read the numeric string cleanly using sscanf()
        float current_cgpa = 0.0f;
        sscanf(cgpa_strings[i], "%f", &current_cgpa);
        if (current_cgpa >= 2.50f) {
            cgpa_at_least_250++;
        }
    }

    printf("1. Count of students in:\n");
    printf("   - 01 Batch: %d\n", batch_01_count);
    printf("   - 27 Batch: %d\n", batch_27_count);
    printf("2. Count of students in CSE discipline: %d\n", cse_count);
    printf("3. Count of students who got at least 2.50: %d\n", cgpa_at_least_250);

    return 0;
}