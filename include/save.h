/*
 * @Description: 
 * @Version: 1.0
 * @Autor: bonbon
 * @Date: 2021-08-01 19:58:22
 * @LastEditors: bonbon
 * @LastEditTime: 2021-08-02 13:56:52
 */

#pragma once 
#include <iostream>
#include <fstream>
#include <vector>
int update_times(void);
void save_data(std::string path,
               int num,
               std::vector<float> &raw_data,
               std::vector<float> &filter_data,
               int left_x,int left_y,
               int middle_x,int middle_y,
               int right_x,int right_y,
               float lidar_left_x,float lidar_left_y,
               float lidar_middle_x,float lidar_middle_y,
               float lidar_right_x,float lidar_right_y,
               short x,short y,double yaw,
               int pot_x,int pot_y,double angle,unsigned char index
               );
std::string date_init(void);