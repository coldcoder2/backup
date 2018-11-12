	/***********************************
	* This is the orginaal tree header
	* @name : tree.h
	* @contributor : coldcoderH3
	* @verson : 0.1
	* @latest update : 11/12 2018
	***********************************/
	
	#ifndef _TREE_H_
	#define _TREE_H_
	
	#ifdef USE_EXCEPTION
	#include "base_exception.h"
	namespace exception
	{
		
	}
	#endif /* USE_EXCEPTION */
	
	/*
	* @T : value type
	*/
	#include <list>
	template<typename T>
	class tree
	{
		public:
			
		private:
			class node
			{
				public:
					T data;
					node * parent;
					std::list<node *> child;
			};
	};
	
	#endif /* _TREE_H_ */
	
