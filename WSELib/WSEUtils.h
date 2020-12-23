#pragma once

#include <sstream>
#include <string>
#include "stl_vector.h"
#include "rgl.h"

#define RGL_RAD 1.57079633f
#define RGL_PI 3.14159265f
#define RGL_E 2.71828183f
#define RGL_LN2 0.693147181f
#define RGL_LOG2 0.301029996f
#define RGL_LOG2_E 1.44269504f

#define MAKEFLAG(x) (1 << (x))
#define MAKEFLAG64(x) (1i64 << (x))
#define SETFLAG(field, mask, value) field = (field & ~mask) | value
#define GETFLAGVALUE(field, mask, shift) (((unsigned int)field & mask) >> shift)
#define SETFLAGVALUE(field, mask, shift, value) field = ((unsigned int)field & ~mask) | (((value) << shift) & mask)
#define INRANGE(value, size) ((unsigned int)(value) < (unsigned int)(1 << (size)))

std::string &trim(std::string &str, const std::string &chars = " \t\n\v\f\r");
std::string &ltrim(std::string &str, const std::string &chars = " \t\n\v\f\r");
std::string &rtrim(std::string &str, const std::string &chars = " \t\n\v\f\r");
std::string &spaces_to_underscores(std::string &str);
std::string itostr(int value, int radix = 10);
std::string ltostr(__int64 value, int radix = 10);
rgl::string format(const char *format, ...);
void game_memcpy_s(void *dest, const unsigned char *src, int num_bytes);
std::string UriDecode(const std::string & sSrc);
std::string UriEncode(const std::string & sSrc);
std::string replaceString(std::string subject, std::string const & search, std::string const & replace);

int rglMod(int a, int b);
float rglMin(float a, float b);
int rglMin(int a, int b);
int rglMin(unsigned int a, unsigned int b);
float rglMax(float a, float b);
int rglMax(int a, int b);
unsigned int rglMax(unsigned int a, unsigned int b);
float rglClamp(float value, float min, float max);

template <typename T>
T rglClampExclusive(T value, T min, T max)
{
	if (value < min)
		return min;

	if (value >= max)
		return max - 1;

	return value;
};

template <typename T>
T rglClampInclusive(T value, T min, T max)
{
	if (value < min)
		return min;

	if (value > max)
		return max;

	return value;
};

void rglSrand(int seed);
float rglRandf();
float rglRandf(float max);
float rglRandf(float min, float max);
int rglRand();
int rglRand(int max);
int rglRand(int min, int max);
bool rglBetween(int value, int min, int max);
bool rglBetween(float value, float min, float max);
bool rglBetweenInclusive(int value, int min, int max);
bool rglBetweenInclusive(float value, float min, float max);

template <typename T>
std::string join(const std::string &separator, T *values, size_t size)
{
	std::stringstream ss;

	for (size_t i = 0; i < size; ++i)
	{
		ss << values[i];

		if (i < size - 1)
			ss << separator;
	}

	return ss.str();
}

template <typename T>
std::string join(const std::string &separator, stl::vector<T> values)
{
	std::stringstream ss;
	size_t size = values.size();

	for (size_t i = 0; i < size; ++i)
	{
		ss << values[i];

		if (i < size - 1)
			ss << separator;
	}

	return ss.str();
}

float rglLog2(float value);
float rglAbs(float value);
int rglAbs(int value);
float rglSqrt(float value);
float rglPow(float value, float exponent);
float rglSin(float value);
float rglCos(float value);
float rglTan(float value);
float rglAsin(float value);
float rglAcos(float value);
float rglAtan(float value);
float rglAtan2(float y, float x);
float rglSquare(float value);
int rglSquare(int value);
int rglRound(float value);
int rglRoundAway(float value);
__int64 rglRound64(float value);
float rglDegToRad(float degrees);
float rglRadToDeg(float radians);
