/**
 *	test_op_cas.cc
 *
 *	@author	Benjamin Surma <benjamin.surma@gree.net>
 */

#include <cppcutter.h>

#include "test_op.h"
#include "connection_iostream.h"

#include <app.h>
#include <op_cas.h>

using namespace gree::flare;

namespace test_op_cas
{
	TEST_OP_CLASS_BEGIN(op_cas, NULL, NULL)
	TEST_OP_CLASS_END;

	void setup()
	{
		stats_object = new stats();
		stats_object->update_timestamp();
	}

	// Parameter parsing is shared with op_set. Please refer to test_op_set.cc

	void teardown()
	{
		delete stats_object;
	}
}

// vim: foldmethod=marker tabstop=2 shiftwidth=2 noexpandtab autoindent
