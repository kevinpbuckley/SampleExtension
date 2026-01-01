# SampleExtension Plugin

This is a sample Unreal Engine plugin that demonstrates how to extend VibeUE with custom MCP tools using the `REGISTER_VIBEUE_TOOL` macro.

## Features

- **Create New Level Tool**: A sample tool that creates new levels with configurable options
  - Path: Where to create the level (e.g., `/Game/Levels`)
  - Name: The level name
  - Type: Normal level or Open World level

## Installation

1. Copy the `SampleExtension` folder to your project's `Plugins` directory
2. Enable the plugin in the Unreal Editor (Edit > Plugins > Sample Extension)
3. Restart the editor
4. Enable VibeUE if not already enabled

## Usage

Once both VibeUE and SampleExtension are enabled, the new tool will be available in the AI chat:

```
Create a new open world level called MyWorld in /Game/Levels
```

Or use the tool directly:

```
create_new_level(LevelPath="/Game/Levels", LevelName="MyLevel", OpenWorld=true)
```

## Tool Parameters

| Parameter | Type | Required | Description |
|-----------|------|----------|-------------|
| `LevelPath` | string | Yes | The path where to create the level (e.g., `/Game/Levels`) |
| `LevelName` | string | Yes | The name of the new level |
| `OpenWorld` | boolean | No | Whether to create an open world level (default: false) |

## Extending the Plugin

To add more tools:

1. Add new static functions to `USampleTools`
2. Register them using `REGISTER_VIBEUE_TOOL` in `SampleToolRegistration.cpp`
3. Rebuild the plugin

## Dependencies

- VibeUE plugin (must be enabled)
- Unreal Engine 5.7+

## License

This sample plugin is provided as-is for educational purposes.