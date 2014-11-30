#pragma once
using namespace System;
ref class RanderData :public Random
{
public:
	RanderData();
public:
	void Setsec_start(int _sec_start);
	void Setsec_end(int sec_end);
	int Getsec_start();
	int Getsec_end();
	int _0toend(int sec_end);
	int RandData;
	int Randing(int sec_start,int sec_end);
private:
	int sec_start;
	int sec_end;
};

