#include "stdafx.h"
#include "RanderData.h"


RanderData::RanderData()
{
	this->sec_end = 0;
	this->sec_start = 0;
	this->RandData = 0;
}
void RanderData::Setsec_start(int _sec_start)
{
	this->sec_start = _sec_start;
}
int RanderData::Getsec_start()
{
	return this->sec_start;
}
void RanderData::Setsec_end(int _sec_end)
{
	this->sec_end = _sec_end;
}
int RanderData::Getsec_end()
{
	return this->sec_end;
}
int RanderData::_0toend(int _sec_end)
{
	RandData = this->Next(_sec_end);
	return RandData;
}
int RanderData::Randing(int sec_start, int sec_end)
{
	RandData = this->Next(sec_start, sec_end);
	return RandData;
}