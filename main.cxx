//
// Created by Gabriele Gaetano Fronzé on 2019-10-16.
//

#include <fuse.h>
#include <fuse-op.h>

static struct fuse_operations operations = {
    .getattr = rucio_getattr,
    .readdir = rucio_readdir,
    .read	= rucio_read,
};

int main( int argc, char *argv[] )
{
  //TODO: parse parameters from json or similar
	return fuse_main( argc, argv, &operations, NULL );
}
