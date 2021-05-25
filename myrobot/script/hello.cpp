#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginMyRobot : public WorldPlugin
	{
	  public: WorldPluginMyRobot () : WorldPlugin()
		   {
	 	      printf("Welcome to Toby's World! Come on in!\n");
		   }
	  public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
			{
			}
};
GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}	 
