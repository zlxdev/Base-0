# Contributing to Base-0

Again, thank you for considering to contribute voluntarily towards this repository. We hope that this learning guide of a repository be of help amongst learners and fellow developers. Now please be sure to read this guide thoroughly before contributing as it will lessen the chances of any issues arising during the process.

*Keep in mind:* any PRs created for an issue that is already assigned to someone **will be discarded without review.**

## Table of Contents

* [Repository Structure](#repository-structure)
* [Proper Labeling](#proper-labeling)
* [How to Contribute](#how-to-contribute)
    * [Different types of changes](#different-types-of-changes)
    * [Verify Before Creating Another]()
    * [Being Assigned an Issue](#being-assigned-an-issue)
    * [Creating an Issue](#creating-an-issue)
    * [Setting Up Your Local Clone](#setting-up-your-local-clone)
    * [Working on an issue](#working-on-an-issue)
    * [Opening a Pull Request](#opening-a-pull-request)

## Repository Structure

Following along with the project topics and concepts, you're eventually bound to see certain referrence and terms being used in regard to the lessons structure. It is important to keep thse terms in mind when referring or contributing to certain parts of our curriculm, both for consistency and to make sure everyone understands what you mean.

* **Level:** This is the most simplest form of the curriculm's structure. Starting from Beginner to Advance concepts. When you first start learning along with this repository, you will be mostly in Beginners section, which then you'll move on to other sections such as intermediate and to advance level.

* **Concepts:** Each level is made up of different courses based on its complexity and difficulty. Each concepts bring new knowledge to the table as well as provided exercises to fortify your knowledge.

* **Section:** On each Concepts is also made up of sections. A section splits the concepts into distinct topics such as datatypes, control flow, and memory management. When someone asked what part of this repository course you are learning, you can just say "I am on Beginner's Datatypes section!"

* **Lessons:** And on the last part are the lessons, which made up of sample codes, exercises, as well as a simple markdown explanation on each topic's `why, what, and how`. This serves as the core of this repository.

## Proper Labeling

A proper issue naming and PR labeling is a must, so we created few meanings to use as a label for PRs and issues, and it is split into two categories: status and types. An PR/issue should have ONLY ONE status label but can have multiple type labels. The following are a few examples:

### Status Labels

* **Abandoned:** This issue/PR has been discarded and will not be implemented.
* **Accepted:** This PR has been accepted and allowed to merge.
* **Awaiting Changes:** Waiting for requested changes to be implemented by the contributor.
* **Awaiting Response:** Waiting for a response from a contributor.
* **Discussion:** This issue/PR has an ongoing discussion.
* **Do Not Merge:** This following PR should not be merge until further notice.
* **Do Not Review:** This issue/PR should not be reviewed until further notice.
* **Inactive:** This PR/issue hasn't been active for more than 2 months and will be closed after the period.
* **Invalid:** This issue/PR is invalid or is not relevant.
* **In Investigation:** Something inside this issue/PR is being investigated.
* **In Progress:** This issue/PR has ongoing work that is being done.
* **Please Help:** This issue can be assigned to another contributors.
* **Pending:** This is a temporary hold on any continued work or review.
* **Review Needed:** This following issue/PR needs an initial or following review.
* **Under Review:** This issue/PR is being review by atleast one maintainer.

### Type Labels

* **Accessibility:** Involves an accessibility feature or accessible review.
* **Bug:** Involves a piece of something that isn't working as intended.
* **Chore:** Involves general changes that doens't affect the actual learning topics of the repo itself.
* **Documentation:** Involves an up-to-date guide or changes to the current documentation.
* **Duplicate:** This issue/PR already exists.
* **Easy Fix:** Involves a minor, simple fix such as typos.
* **Enhancement:** Involves a new feature or improvement request.
* **C00L:** This issue is a larger, unnamed project with several moving parts.
* **Good First Issue:** Good for starting/beginner contributors.
* **Maintainer Only:** This issue is only accessible to maintainers.
* **Priority:** This issue/PR should be resolved urgently and quickly.

Kudos to [The Odin Project](https://github.com/TheOdinProject) for giving ideas on how to label each meanings separately, this will be of help not only for the contributors, but also to everyone.

## How to Contribute

### Different types of changes

**Minor Issues and Changes:** These don't have a major impact in our repos.

* Typo or grammar fixes - "I noticed a few typos in documentation that is using incorrect grammar."
* Simple syntax errors - "This line of code seems to be missing a semicolon(;) or this line of code seems to be missing an ampersand(&)."
* Clarifying questions - "This lesson says that this is a good practice of syntax usage, but the previous lesson says that some of tehse are bad practice. Which is correct?"
* Other small-scale changes - "I think including a documentation for X Lesson to explain the topic more thoroughly should be done and avoid confusion for other learners."

**Major Issues and Changes:** These, on the other hand, will have a major impact in this repository, and will require more work to be done in order to fix the issues or implement some changes. For this reason, you should never submit a PR without a supervision and approval of the maintainers, as we want to avoid wasting your time and work if we ever change our mind or didn't accept your proposal. Instead, you should either open an issue or a discussion and wait to recieve a response. Keep in mind that the maintainers is also human as you. Meaning they also are busy and have their own lives, meaning they won't probably immediately respond to your issue.

Major issues and changes examples:

* Overall refactor of one of the lessons
* Creating a new lesson
* A build environment change suggestion
* A new feature for a certain purpose
* An overall refactor of file-structures

### Verify Before Creating Another

It's important that you look first through any open [issues](https://github.com/n-mee/Base-0/issues) and [pull requests](https://github.com/n-mee/Base-0/pulls) **before** attempting to submit a new issue or work on a change, regardless of it's difficultness. In order to avoid duplication and prevent conflict between two person who work on a different issues or change but had the same problem.

If you suggestion alrady exists in an open issue or PR, but you feel that there are missing details, comment on the issue/PR to let the people involved know the missing details.

### Being Assigned an Issue

If you would like to work on an existing issue in a repo"

1. Find an issue that is not currently assigned to anyone.
    * A few examples of good places to start are issues with the `Status: Please Help` or `Type: Good First Issue` labels. You can filter the issue list to only show ones with these (or any) specific labels to make them easier to find.
    * You can also filter other issues with the `Status: In Progress` label, so that you can only see issues that haven't been assigned to anyone.
2. Ask to be assigned the issue by a maintainer.
    * **If you are not a maintainer, do not give others permission to work on ANY issue**
3. Wait to be assigned on the issue before starting on working on it.
4. After being assigned, address each item listen in the acceptance criteria, if it even exist.
    * If the issue doesn't have a barrier-to-entry criteria, feel free to go about resolving the issue in any way you like. You can also ask the maintainer that assigned you the issue if there are any specific criteria that must be fulfilled.

### Creating an Issue

1. If you would like to make a simple change that is not a part of any existing isue, you are welcome to discard the next step and just submit a PR with your proposed change(s).

2. To start, create a new issue and **read the issue template in its entirety and fill out all applicable sections**. If you aren't sure how to create an issue, you can read the Github documentation for [creating an issue from a repository](https://docs.github.com/en/issues/tracking-your-work-with-issues/using-issues/creating-an-issue#creating-an-issue-from-a-repository).
    * The title of the issue must follow the format described in the issue template.
    * If you would like to be assigned the issue you are creating, complete the applicable checkbox in hte issue template. Note that this does not guarantee that you will be assigned the issue, but rather it lets maintainers know that you are interested in it.
    * The more details you can provide towards the issue, the better.

### Setting Up Your Local Clone

Before you begin working on anything at all, make sure you follow these steps in order to set up a clone on your local machine.

1. Fork the repo on to your own GitHub account. If you don't know how to do so, follow the GitHub documentation on how to [fork a repo](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo).

2. Clone the forked repo to your local machine with one of the commands below. Be sure the `<user>` text is replaced with your actual GitHub username, as well as `<repo name>` with the actual repo name. You can also read the GitHub documentation on [how to clone a repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository).

    ``` bash
    # If you have SSH set up with Git:
    git clone git@github.com:<user>/<repo name>.git
    # Otherwise for HTTPS
    git clone https://github.com/<user>/<repo name>.git

    # for example
    git clone https://github.com/n-mee/Base-0.git
    ```

3. `cd` into the directory of your already cloned repo inside your local PC, then set the upstream remote so you can keep your local clone synced with Base-0's original repo. The `<repo name>` below should be the same as the one you used when creating your local clone in the previous step.
    ``` bash
    # If you have SSH set up with Git:
    git remote add upstream git@github.com:n-mee/<repo name>.git
    # Otherwise for HTTPS
    git remote add upstream https://github.com/n-mee/<repo name>.git

    # for example
    git add remote upstream https://github.com/n-mee/Base-0.git
    ```

### Working on an issue

Once you have the repo forked and cloned, and the upstream remote has been set, you can begin working on your issue:

1. Create a new branch, replacing the `<your branch name>` with an actual branch name that briefly explains the purpose of the branch in some way:
    ``` bash
    git checkout -b <your branch name>

    #Some examples:
    git checkout -b docs/lesson-x-guide
    git checkout -b fix/lesson-bug
    git checkout -b feat/new-lesson
    ```

2. Add commits as you work on your issue, replacing this `<commit message>` text with your actual commit message:
    ```
    git commit -m "<commit message>"

    # An example:
    git commit -m "docs: Fixed readme typos and grammatical issues."
    ```

3. Sync your local work with the remote upstream every often. Follow [the Odin Project's guide for ongoing workflow](https://www.theodinproject.com/lessons/ruby-using-git-in-the-real-world#ongoing-workflow) instructions in Using Git in the Real World lesson.

4. Push your branch to forked repo, replacing with `<your branch name>` with the branch you've been working on locally:
    ```
    git push origin <your branch name>

    # An example:
    git push origin docs/lesson-x-guide
    ```

### Opening a Pull Request

1. After pushing your changes, go to your forked repo on GitHub and click the "Compare & pull request" button. If you have multiples of this button, be sure you click the one for the correct branch.

    * If you don't see this button, you can click the branch dropdown menu and then select the branch you just pushed from your local clone:
    
         ![Github branch dropdown menu picture](https://user-images.githubusercontent.com/70952936/150646139-bc080c64-db57-4776-8db1-6525b7b47be2.jpg)
    
    * Once you have switched to the correct branch on GitHub, click the "Contribute" dropdown and then click the "Open pull request" button.
