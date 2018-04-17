// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int numerator = fraction[0];
    int denomonator = fraction[2];
    if(denomonator == 8)
    {
        return numerator;
    }
    else{
        return 8/denomonator;
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{   
    if(strlen(note) == 2){
       // look at note first index
    } 
    else
    {
        
    }
    // if(note[1]=='#' || note[1] =='b'){
    //     note[1] == '#' ? semitones++ : semitones--;
    // }
    return pow(2, (semitones/12)) *440;
}



// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(s == NULL){
        return true;
    }
    else{
        return false;
    }
    // user input is == to null if no input
    // TODO
}
