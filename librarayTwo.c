#include "librarayTwo.h"
#include <assert.h>
/**
 *
 * @author (Mofadhal Al-Manari und Leen Alkhadraa)
 * @version (13.07.2021)
 */

//Mit: v := Geschwindigkeit, a := Beschleunigung, p := Impuls, s := Weg, t := Zeit, m = Masse
//i Weg einer gleichförmigen geradlinigen Bewegung: s = v · (t − t 0 )
//ii Weg einer gleichmäßig beschleunigten geradlinigen Bewegung: s = 2a 0
// iii Geschwindigkeit einer gleichmäßig beschleunigten geradlinigen Bewegung: v = a · (t − t 0 ) + v 0

float wggb (float v , float z , float zz){ return (v * (z - zz));}
float wgbgb (float a , float v , float vz) { assert(a>0) ;  return ((v * v)-(vz * vz) / 2*a);}
float ggbgg (float a , float t , float tz , float vz){ return ((a*(t - tz)) + vz); }
