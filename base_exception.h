	/*****************************************
	* This is the base class for exceptions
	* @name : base_exception.h
	* @contributor : coldcoderH3
	* @verson : 0.1
	*****************************************/
	
	#ifndef _BASE_EXCEPTION_H_
	#define _BASE_EXCEPTION_H_
	#include <iostream>
	
	#ifdef USE_EXCEPTION
	namespace exception
	{
		#if __cplusplus >= 201103L
		class exception
		{
			public:
				exception() : message(nullptr) {}
				exception(const char * message) : message(message) {}
				~exception() {}
				
				void what() {throw message;}
			private:
				const char * message;
		};
		#else
		class exception
		{
			public:
				exception() : message(0) {}
				exception(const char * message) : message(message) {}
				~exception() {}
				
				void what() {throw message;}
			private:
				const char * message;
		};
		#endif
	}
	#endif /* USE_EXCEPTION */
	
	#endif /* _BASE_EXCEPTION_H_ */
	
