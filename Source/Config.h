/**
 * @file Config.h
 * @brief 配置相关的头文件
 * @copyright Copyright (c) 2020 Beijing SOJO Electric CO., LTD.
 * @company  SOJO
 * @date 2020.03.24
 *
 * @author Lei.L
 * @version ver 1.0
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define DEBUG_PRINTF
#ifdef DEBUG_PRINTF
#define printf_debug(fmt,...) do{printf("%s: %s[line %d]: "fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);}while(0)
#endif


#define JSON_FILENAME				"NetUartConfigFile.json"		//配置json文件名
#define CONFIG_STRUCT_MAX			30								//配置结构体的最大数量
#define DATA_NAME_LENTH_MAX			20								//数据名字字符串最大长度
#define CONFIG_STRING_LENTH_MAX		DATA_NAME_LENTH_MAX				//配置字符串值的最大长度

#define MAX_DATA_SIZE       		1600			//数据最大数量
#define BACKLOG 					10				/* max client */


/* 程序错误码 */
typedef enum {
	FUNCTION_FAIL = -1,		//函数执行错误
	NO_ERROR = 0,			//没有错误
	POINT_NULL,				//指针为空
	OPEN_FILE_FAIL,			//打开文件失败
	MALLOC_FAIL,			//分配堆内存失败
	FEW_ARGUMENTS,			//参数太少
	ERROR_ARGUMENTS,		//参数错误


}ErrorCode;

#endif
