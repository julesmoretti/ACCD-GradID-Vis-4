# Contributing to ACCD GradID Vis 4

Thank you for your interest in contributing to the ACCD GradID Vis 4 repository! This library of example code supports the Vis 4 course by providing hardware and software UX prototyping resources. We welcome contributions such as new example code, improvements to existing code, documentation updates, or bug reports to help keep this repo valuable for the community.

## How to Contribute

You can contribute to this repository using **GitHub Desktop** for code changes or the **GitHub Issues** section for reporting bugs, suggesting features, or discussing ideas. Below are the steps for each method.

### Option 1: Contributing via GitHub Desktop

GitHub Desktop is a user-friendly tool for managing contributions. Follow these steps to submit code or documentation changes:

1. **Set Up Your Environment**:
   - Ensure you have [GitHub Desktop](https://desktop.github.com/) installed.
   - Clone the repository:
     - Open GitHub Desktop and click **File > Clone Repository**.
     - Select the URL tab and enter `https://github.com/julesmoretti/ACCD-GradID-Vis-4`.
     - Choose a local path and click **Clone**.

2. **Create a Branch**:
   - In GitHub Desktop, click the **Current Branch** dropdown and select **New Branch**.
   - Name your branch descriptively (e.g., `add-led-neopixel-example` or `update-readme`).
   - Click **Create Branch**.

3. **Make Changes**:
   - For **new Arduino examples**, create a dedicated folder in the `1_Arduino` directory named after the example (e.g., `LED_neopixel` for an LED Neopixel example). Inside this folder, include:
     - **Fritzing File**: A `.fzz` file named consistently with the folder (e.g., `LED_neopixel.fzz`). Use the provided `arduino-UNO-R4-wifi.fzpz` component in the `1_Arduino` folder for Arduino UNO R4 WiFi circuits.
     - **Fritzing Diagram Image**: A `.jpg` export of the Fritzing diagram, named consistently (e.g., `LED_neopixel.jpg`).
     - **Arduino Code**: An `.ino` file named consistently (e.g., `LED_neopixel.ino`) with clear comments explaining functionality, hardware requirements, and any setup instructions.
     - **README**: A `README.md` file (note: use this exact name, not `LED_neopixel.md`) detailing the example’s purpose, hardware needed, wiring instructions, and usage notes.
   - For **existing examples**, update files while maintaining the above structure and naming conventions.
   - For **other changes** (e.g., `README.md` in the repo root), follow consistent Markdown formatting (see existing files for style).
   - Ensure all code includes clear comments, especially for changes that may evolve over time.

4. **Commit Your Changes**:
   - In GitHub Desktop, review your changes in the left panel.
   - Enter a commit message summarizing your changes (e.g., "Added LED Neopixel example with Fritzing files and README").
   - Click **Commit to <branch-name>**.

5. **Push and Create a Pull Request**:
   - Click **Publish Branch** to push your changes to GitHub.
   - In GitHub Desktop, click **Create Pull Request** (or visit the repo at https://github.com/julesmoretti/ACCD-GradID-Vis-4).
   - On GitHub, fill out the pull request form:
     - Describe your changes and their purpose.
     - Reference any related issues (e.g., "Fixes #12").
     - Submit the pull request for review.

6. **Respond to Feedback**:
   - Maintainers may request changes. Update your branch locally, commit, and push again—GitHub Desktop will sync these to your pull request.
   - Once approved, your changes will be merged!

### Option 2: Using GitHub Issues

If you’re not ready to submit code or want to report a bug, suggest an improvement, or ask a question, use the GitHub Issues section:

1. **Navigate to Issues**:
   - Go to https://github.com/julesmoretti/ACCD-GradID-Vis-4/issues.
   - Click **New Issue**.

2. **Choose an Issue Type**:
   - Select **Bug Report** for issues with existing code (e.g., an Arduino example doesn’t work as expected).
   - Select **Feature Request** for new example ideas or enhancements.
   - For general questions or discussions, choose **Question** or create a custom issue.

3. **Provide Details**:
   - Use a clear title (e.g., "Bug: LED Neopixel example fails on Arduino UNO R4").
   - Describe the issue or idea, including:
     - Steps to reproduce (for bugs).
     - Expected vs. actual behavior.
     - Any relevant hardware details (e.g., Arduino UNO R4 WiFi).
     - Screenshots or code snippets, if applicable.
   - Submit the issue and engage with maintainers in the comments.

### Contribution Guidelines

To ensure high-quality contributions, please follow these guidelines:
- **Code Quality**: Ensure your code is functional, well-commented, and includes all required files (`.fzz`, `.jpg`, `.ino`, `README.md`) for Arduino examples.
- **Relevance**: Contributions should align with the Vis 4 course’s focus on UX prototyping (hardware/software).
- **File Organization**: Place Arduino examples in the `1_Arduino` folder within a dedicated subfolder (e.g., `LED_neopixel`). Use consistent naming for files (e.g., `LED_neopixel.ino`, `LED_neopixel.fzz`, `LED_neopixel.jpg`) except for `README.md`.
- **Respect the Community**: Be respectful and constructive in issues and pull request discussions.
- **License**: By contributing, you agree that your contributions are licensed under the repository’s [license](LICENSE).

### Need Help?

- If you’re new to GitHub Desktop, check the [official documentation](https://docs.github.com/en/desktop).
- For GitHub Issues, see the [GitHub Issues guide](https://docs.github.com/en/issues).
- For questions about the Vis 4 course, specific examples, or contribution processes, you can:
  - Open an issue on GitHub.
  - Reach out to maintainers via the Student and Faculty Slack workspace.
  - Contact the maintainers directly for urgent inquiries.

Thank you for helping improve this resource for the Vis 4 community!