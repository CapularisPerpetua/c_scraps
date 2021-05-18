// reproduced from code discussed on Jacob Sorber's youtube channel
// Video Title: Bit Fields in C. 
// Video URL (at time of writing): https://www.youtube.com/watch?v=aMAM5vL7wTs
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pwd.h>
#include <unistd.h>

#define TS_BUF_LENGTH 30

// define 'my' options
#define LOG_TIME      0x01 //0b00000001
#define LOG_DATE      0x02 //0b00000010
#define LOG_USER      0x04 //0b00000100
#define LOG_COUNT     0x08 //0b00001000
#define LOG_DATETIME  0x03 //0b00000011  
#define LOG_ALL       0xFF //0b11111111
void logmsg(FILE *fp, char *message, uint8_t options)
{
    static uint64_t logcount = 0;

    time_t time_val;
    char timestamp[TS_BUF_LENGTH];
    char datestamp[TS_BUF_LENGTH];
    struct tm* tm_info;

    time_val = time(NULL);
    tm_info = localtime(&time_val);

    strftime(datestamp, TS_BUF_LENGTH, "%F (%a)", tm_info);
    strftime(timestamp, TS_BUF_LENGTH, "%H:%M:%S", tm_info);
    if (options & LOG_COUNT)
    fprintf(fp, "%lli, ", ++logcount);
    if (options & LOG_DATE)
    fprintf(fp, "%s, " , datestamp);
    if (options & LOG_TIME)
    fprintf(fp, "%s, " , timestamp);
    if (options & LOG_USER)
    fprintf(fp, "%s, " , getlogin()); // noted as unsafe
    fprintf(fp, "%s\n", message);
    return; // not present in video
}

int main(void)
{
    logmsg(stdout, "Things are running fine." , 0);
    logmsg(stdout, "Hmm... maybe not. What's this?", LOG_USER | LOG_DATE);
    logmsg(stdout, "The wheels are coming off!", LOG_TIME | LOG_USER | LOG_COUNT);
    logmsg(stdout, "AAAAARGH.", LOG_COUNT);
    logmsg(stdout, "Logging everything!", LOG_ALL);
    logmsg(stdout, "Logging datetime.", LOG_DATETIME);
    return EXIT_SUCCESS; // not present in video
}
