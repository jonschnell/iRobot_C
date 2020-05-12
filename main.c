/*
 * main.c
 *
 *  Created on: Jan 29, 2020
 *      Author: jschnell
 *      bot 9
 */

#include "open_interface.h"
#include "movement.h"
#include "Timer.h"
#include "lcd.h"
#include "string.h"


void main(){
//
    timer_init();
    lcd_init();
//
    oi_t *sensor_data = oi_alloc();
//
    oi_init(sensor_data); // do this only once at start of main()
//
    double distance = 2200;
   // double degrees = 90;

   // move_backward(sensor_data, distance);


    move_forward(sensor_data, distance);
/*
    turn_right(sensor_data, degrees);
//
    move_forward(sensor_data, distance);
//
    turn_left(sensor_data, degrees);
//
    move_forward(sensor_data, distance);
*/
    oi_free(sensor_data); // do this once at end of main()

}
