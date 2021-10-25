#include "../include/s24299/Time.h"
#include <iostream>
#include <string>
#include <sstream>


namespace s24299
{
    Time::Time(int h, int m, int s) : hours{h}, minutes{m}, seconds{s} {}
    
    auto Time::to_string() const -> std::string
    {
        auto output = std::ostringstream{};
        if (hours < 10)
        {
            output << "0" << hours << ":";
        }
        else
        {
            output << hours << ":";
        }
        
        if (minutes < 10)
        {
            output << "0" << minutes << ":";
        }
        else
        {
            output << minutes << ":";
        }
        
        if (seconds < 10)
        {
            output << "0" << seconds << ":";
        }
        else 
        {
            output << seconds;
        }
        return output.str();
    }
    
    auto Time::next_hour() -> void
    {
        if (hours == 23)
        {
            hours = 0;
        }
        else
        {
            hours++;
        }
    }
    
    auto Time::next_minute() -> void
    {
        if (minutes == 59)
        {
            minutes = 0;
            next_hour();
        }
        else
        {
            minutes++;
        }
    }
    
    auto Time::next_second() -> void
    {
        if (seconds == 59)
        {
            seconds = 0;
            next_minute();
        }
        else
        {
            seconds++;
        }
    }
    
    auto Time::to_string(Time::Time_of_day tod) const -> std::string
    {
    	switch (tod)
    	{
    		case Time_of_day::morning:
    			return "morning";
    		case Time_of_day::afternoon:
    			return "afternoon";
    		case Time_of_day::evening:
    			return "evening";
    		case Time_of_day::night:
    			return "night";
    		default:
    			throw "Error";
    	}
    }
    
    auto Time::time_of_day() const -> Time_of_day
    {
    	if (hours > 5 and hours < 12)
    	{
    		return Time_of_day::morning;
    	}
    	else if (hours > 11 and hours < 19)
    	{
    		return Time_of_day::afternoon;
    	}
    	else if (hours > 18 and hours <= 22)
    	{
    		return Time_of_day::evening;
    	}
    	else
    	{
    		return Time_of_day::night;
    	}
    }
}

auto main() -> int
{
    auto time = s24299::Time(23, 59, 59);
    std::cout << time.to_string() << std::endl;
    time.next_minute();
    std::cout << time.to_string() << std::endl;
    time.next_hour();
    std::cout << time.to_string() << std::endl;
    std::cout << time.to_string(time.time_of_day()) << std::endl;
    return 0;
}
