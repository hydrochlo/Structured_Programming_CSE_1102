/*
1.  Define two structures called "Country" and "City".

    A Country has the following attributes:
    Name
    City count (≤ 5)
    Count of universities
    An array of 10 cities

    A City has the following attributes:
    City name
    Population count

    Get information for 10 countries as input from the user.

    Set A
    Show the name(s) of the country/countries with the highest population.
    Set B
    Show the average population of the country/countries with the highest number of cities.
*/

#include <stdio.h>
#include <string.h>

struct City{
    char city_name[100];
    int population_count;
};

struct Country{
    char Name[100];
    int city_count;
    int count_of_uni;
    struct City cities[10];
};



int main(){
    struct Country c[2];

    // Let's assume I have 2 countries.
    for(int i=0; i<2; i++){
        scanf("%s", c[i].Name);
        scanf("%d", &c[i].city_count);
        scanf("%d", &c[i].count_of_uni);

        for(int j=0; j<c[i].city_count; j++){
            scanf("%s", c[i].cities[j].city_name);
            scanf("%d", &c[i].cities[j].population_count);
        }
    }

    
    // For loop for counting population
    int population[2] = {0};
    for(int i=0; i<2; i++){
        for(int j=0; j<c[i].city_count; j++){
            population[i] += c[i].cities[j].population_count;
        }
    }

    // Getting the maximum population 
    int max_pop = -1e5;
    for(int i=0; i<2; i++){
        if(max_pop < population[i]){
            max_pop = population[i];
        }
    }

    // Set A: Printing all the countries having the maximum population.
    for(int i=0; i<2; i++){
        if(max_pop == population[i]){
            printf("%s\n", c[i].Name);
        }
    }

    // Set B: Showing the average population of the country/countries with the highest number of cities.
    int max_city = 0;
    for(int i=0; i<2; i++){
        if(c[i].city_count > max_city){
            max_city = c[i].city_count;
        }
    }

    for(int i=0; i<2; i++){
        if(max_city == c[i].city_count){
            float total_pop = 0;
            float avg_pop;
            for(int j=0; j<c[i].city_count; j++){
                total_pop += c[i].cities[j].population_count;
            }
            avg_pop = total_pop / c[i].city_count;
            printf("Average Population = %f\n", avg_pop);
        }
    }

    return 0;
}