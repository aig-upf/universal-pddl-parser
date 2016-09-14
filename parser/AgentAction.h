
#pragma once

#include "Action.h"

class AgentAction : public Action {

public:
  
	AgentAction( const std::string & s ) : Action( s ) {}

	void print( std::ostream & s ) const {
		s << name << params << "\n";
		s << "Agent: " << params[0] << "\n";
		s << "Pre: " << pre;
		if ( eff ) s << "Eff: " << eff;
	}

//	void printParams( std::ostream & s, TokenStruct< std::string > & ts, Domain & d );

	void PDDLPrint( std::ostream & s, unsigned indent, const TokenStruct< std::string > & ts, const Domain & d ) const override;

	void parse( Filereader & f, TokenStruct< std::string > & ts, Domain & d );
};