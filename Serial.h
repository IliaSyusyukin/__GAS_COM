#ifndef __SERIAL_H__
#define __SERIAL_H__

#include "defines.h"
#include "cmsis_os.h"
#include "stm32f10x.h"


#define  RS_BUF_MAX 256

struct BUFFER_RS 
{
  u8 in;          					/* Next In Index */
  u8 out;         					/* Next Out Index */
  u8 buf[RS_BUF_MAX];  		 /* Buffer */
  //u8 *buf;//[RS_BUF_MAX];   /* Buffer */
};

//------------------------------------------------------------------------
class TSerial
{
  private:

	protected:
		volatile struct BUFFER_RS _tx, _rx;
		//u16 RS_BUF_MAX;
	public:	 
};		


#endif 
