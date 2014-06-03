#include "cage.h"

struct game_data {
    struct image* logo;
};

static void* create_game( void )
{
    struct game_data* gd = malloc( sizeof( struct game_data ) );
    gd->logo = create_image( "res/cage.png" );
    /*
     * Add your setup code here
     */
    return gd;
}

static void update_game( void* data, float elapsed_ms )
{
    struct game_data* gd = data;
    draw_image( gd->logo, 0, 0, NULL, 0 );
    /*
     * Update and draw you game
     */
    UNUSED(elapsed_ms);
}

static void destroy_game( void* data )
{
    /*
     * Clean up code goes here
     */
    free( data );
}

int main( void )
{
    return game_loop( create_game, update_game, destroy_game );
}
