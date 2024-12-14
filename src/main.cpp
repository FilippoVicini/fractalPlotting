#include <SFML/Graphics.hpp>

int main() {
  // Create the SFML window
  auto window = sf::RenderWindow({1920u, 1080u}, "CMake SFML Project");
  window.setFramerateLimit(144);

  // Create a circle shape
  sf::CircleShape circle(100.0f);       // Radius of 100
  circle.setFillColor(sf::Color::Blue); // Fill the circle with red color
  circle.setPosition(860.0f,
                     490.0f); // Position in the center of a 1920x1080 window

  while (window.isOpen()) {
    for (auto event = sf::Event(); window.pollEvent(event);) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();      // Clear the window
    window.draw(circle); // Draw the circle
    window.display();    // Display the rendered frame
  }
}
