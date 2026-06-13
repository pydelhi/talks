# PyDelhi reviewers: proposal review guidelines

These guidelines set out how we, as reviewers at PyDelhi, approach evaluating talk proposals, from acknowledgement through to scheduling. Like our guidelines for speakers, these are high-level suggestions, not hard and fast rules. Our approach may differ on a case-by-case basis, and good judgment is always welcome. The goal is to ensure that every speaker receives a fair, thoughtful, and timely review, and that our meetup editions remain engaging, varied, and accessible.

This document is best read alongside our [guidelines for speakers](speaking.md) and [accessibility guidelines](accessibility.md), which together describe what we look for in a strong proposal and what we ask of our speakers.

---

## How proposals are tracked on GitHub

Our review workflow runs entirely through GitHub issues, so you need a GitHub account. You can request to be added to the `@pydelhi/reviewers` team through our internal channels. Each proposal moves through a set of labels that communicate its status to the team at a glance through the issues dashboard, without having to navigate to the issue itself. The current set of labels and their descriptions lives at [github.com/pydelhi/talks/labels](https://github.com/pydelhi/talks/labels).

We believe it is worth documenting a bunch of conventions that may not be obvious from the labels alone:

**Workflow stages.** A proposal usually moves through these phases: submitted and awaiting a reviewer, review in progress, waiting on the author for more information or a response, a decision (accepted, declined, or put on hold), scheduled for a specific date, and finally delivered. There are also format labels (for lightning talks, tutorials, online-only speakers, and so on) and an inactivity label for proposals that have stalled, which is applied automatically after sixty days of no activity on either side, whether that is an author who has not responded to a request for information or a reviewer who has not followed up. The exact message posted when this happens is defined in [`.github/workflows/stale.yml`](../.github/workflows/stale.yml).

**Claiming a proposal.** The "needs reviewer" label works differently from the rest. You remove it when you decide to take on a review, rather than adding a new one. This signals to the team that someone is handling it without requiring a separate action. You may keep an eye on open issues carrying this label when you have capacity to review.

**Keeping labels current.** Labels are only useful if they reflect reality. When a proposal moves to a new stage, please update its labels promptly. A proposal sitting under "review in progress" for three weeks when no one is actively reviewing it is more confusing than having no label at all.

**Topic labels.** Alongside the `domain` field in the proposal form, we also tag proposals with more granular topic labels, for example `topic: generative AI - RAG`, `topic: agentic AI`, `topic: blockchain`, `topic: web development`, and so on. These exist for both purposes: to make sorting easier, and to help with the question raised in [§2, Holding oversubscribed topics to a higher standard](#holding-oversubscribed-topics-to-a-higher-standard), as to what counts as an "oversubscribed" topic over time, and a new reviewer cannot be expected to know this from first principles. If you are unsure whether a proposal's topic has come up a lot recently, you can filter open and recently closed issues by its topic label(s) to get a feel for the current landscape before applying that standard. The set of topic labels is expected to grow and split over time as fields mature, so feel free to propose new ones, or split an existing one, when it becomes too broad to be useful.

---

## Guidelines for reviewing proposals

### 1. Acknowledge proposals promptly

One of the most impactful things we can do as reviewers is to respond quickly. Proposals go inactive fast, and the window for retaining a speaker's interest is narrow. A brief acknowledgement within the first few days of submission has been noted to make a significant difference, even just a short note confirming we have seen it and will review it soon. Hence, it does not need to be a full review; a warm and timely note is enough.

An automated response handles the very first touchpoint, but a human response is always appreciated and carries a personal warmth that automation cannot replicate.

### 2. Evaluate talk content fairly and consistently

Proposals should be evaluated on the quality and fit of the content, not on the speaker's background, communication style, or the reviewer's personal interest in the topic. Our [guidelines for speakers](speaking.md) outline what we look for in a strong proposal, and reviewers should use these as a reference when evaluating. We want to encourage a wide range of topics and speakers, so it's important to be open-minded and supportive, especially for first-time speakers or those from underrepresented groups. The goal is to help speakers improve their proposals and feel welcome, not to gatekeep based on subjective preferences. That said, it is alright for a reviewer to have a personal interest in a topic and choose to advocate for reviewing it more quickly or giving it more attention, as long as the evaluation itself remains fair and consistent with our guidelines.

#### Holding oversubscribed topics to a higher standard

At the time of writing this, generative AI, large language models, RAG-based applications, and various similar topics are heavily oversubscribed at events organised by PyDelhi. They are not prohibited, but when we receive such proposals, the material should demonstrate genuine technical depth, novelty, or a perspective that adds real value to our community. The same applies to topics such as blockchain and web3, which have been popular "bubbles" in the past.

This is a **higher bar, not a ban**. If a proposal in this space does not yet meet it, reviewers should clearly articulate what would make it acceptable rather than simply declining it. Our repeat attendance improves when the programme is varied, and accepting a weak talk on an oversubscribed topic crowds out proposals on distinctive, under-represented areas.

If you're new to reviewing and unsure whether a topic currently falls into this category, see the note on topic labels in [How proposals are tracked on GitHub](#how-proposals-are-tracked-on-github) for a practical way to check.

#### Sponsored talks are not exempt

Talks from venue or event partners must go through the same review process as community submissions. They should be highly technical and as non-promotional as possible. Sponsors **must not** place restrictions on the content or other speakers in our programme. PyDelhi does not accept such conditions and will decline any proposal that includes them, as a primarily Python and open source, community-centric initiative. We must remain committed to maintaining the integrity and independence of our programme.

### 3. Help speakers strengthen their abstract

A weak abstract does not always mean a weak talk. If the topic seems valuable but the proposal lacks detail, clarity, or a clear sense of audience, it is worth asking the speaker to expand on their idea before making a final decision. Sometimes a short follow-up question is enough to unlock a strong proposal – for instance, asking what the main takeaway would be for someone unfamiliar with the subject, or what approach the speaker plans to take. Updates to the proposal questionnaire can be made at any time based on what we deem needed from it, as a living document.

If you are declining partly because the abstract is unclear, say so explicitly. Many speakers, especially first-timers, do not realise that a well-written abstract is itself an indication of how well-structured the talk will be.

### 4. Encourage slide submission

We strongly recommend that speakers submit slides before their talk. Drafts are perfectly fine, and final, polished slides should never be required. The two main reasons for this are our commitment to accessibility and our archival practices. When requesting slides, it helps if we point speakers to our [accessibility guidelines](accessibility.md), which cover our preferences for slide backgrounds, fonts, contrast, and more.

Exceptions exist: very occasional lightning talks where slides may not apply, or short demos, or talks where there are no supposed slides, or situations where scheduling pressure makes it more practical to accept a speaker for a future meetup date rather than waiting on their materials. Both should remain rare, as exceptions to a norm.

### 5. Confirm the talk format and length

During review, consider whether the proposed topic is a better fit for a full 25-minute slot (20 minutes plus Q&A) or a 5-minute lightning talk. Some ideas are self-contained enough that a lightning format would serve them better, and some brief proposals may have enough depth for a longer slot. If the speaker has not specified, or if their choice seems off, suggest an alternative and explain why. This is also a good moment to confirm that the speaker can attend on the specific meetup date you have in mind.

### 6. Support first-time speakers

When a speaker indicates they are new to public speaking, we try to offer additional support wherever our availability allows. This can include a short mock or practice session online, feedback on their slide structure, or simply reassuring them that our meetups are a welcoming space to try things out. Our [speaking guidelines](speaking.md) already set this tone, and reviewers can reinforce it in their communications.

### 7. Conflict of interest

If a reviewer has a close personal or professional relationship with a proposer, or any other competing interest, they should recuse themselves from that proposal's review and flag it to the rest of the team. This keeps the process fair and consistent for all submitters.

### 8. Accessibility standards for slides

When reviewing materials or requesting revisions, direct speakers to our [accessibility guidelines](accessibility.md), which cover slide backgrounds, contrast, fonts, language, and other visual and content accessibility considerations. As a general note: light-mode slides are preferred given the projector conditions at most of our venues, but the full rationale and specifics are documented in the accessibility guidelines.

### 9. Write constructive and kind feedback

Reviewer feedback should be actionable, not just evaluative. If declining or requesting a revision, explain specifically what is missing or unclear and what would make the proposal acceptable. If accepting, a brief note about what you are looking forward to helps a speaker feel confident going in.

Keep in mind that many submitters are first-time speakers, students, or may be non-native English speakers, i.e., taking up the practice of speaking English as a Second Language (ESL). They may not be familiar with the norms of public speaking or proposal writing, and they may be nervous about submitting. A kind and supportive tone can make a huge difference in encouraging them to continue engaging with our community, even if their first proposal is not accepted. The goal is to help speakers improve and feel welcome, not to gatekeep based on subjective preferences. A short, specific note is almost always more useful than a long, vague one.

### 10. Do not use AI to write your reviews

We strongly discourage using large language models or AI assistants to write review feedback. The case against it is not about technology – it is about what a review is for.

A meaningful review requires genuine engagement with the proposal: understanding what the speaker is trying to say, how well it fits PyDelhi's audience, whether the approach is novel or well-trodden at our meetups, and what specifically would make it better. That kind of judgment is personal and contextual. An AI tool has no knowledge of our community, our past meetups, or what our attendees find valuable, so its output is necessarily generic, even when it sounds detailed and helpful.

Speakers put effort into their proposals. A review synthesised by an AI is not a genuine response to that effort, even if it is polished and coherent. It also means the reviewer has not actually engaged with the proposal, which defeats the purpose of having human reviewers at all. We value honest interactions over ones that prioritise perfect language; a short, imperfect note written by a real person who has actually read the proposal is worth far more than a thorough-sounding response that was not.

If you have used AI assistance in any capacity during a review—for instance, to check grammar, clarify phrasing, or translate—please be transparent about it when sharing your feedback with the team. Disclosures do not make the review illegitimate, but concealment undermines the trust the process depends on, and the reviewers' trustworthiness among each other and unto speakers.

If you are short on time, it is much better to say so and ask another reviewer to take the lead, or to hold your feedback until you can give it the attention it deserves, than to produce something that only appears thoughtful.

### 11. Coordinate with the review team before deciding

Where possible, a proposal should not be accepted or declined on the basis of a single reviewer's view alone. Before communicating a final decision on a borderline case, share your readings with the team first – a quick note in our internal channels is enough. Multiple perspectives catch things a single reviewer might miss, and coordinating avoids the risk of sending contradictory signals to a speaker. For clear acceptances or rejections, less coordination is needed, but it is still good practice to keep the rest of the team in the loop.

### 12. Decision outcomes and communication

There are three outcomes for any proposal:

1. **Accept:** Welcome the speaker, confirm the slot and the date, and set clear expectations about when you would like their slides.
2. **Request revisions or more information:** Specify exactly what is needed and give a reasonable timeframe to respond. Keep the conversation going rather than letting it stall.
3. **Decline:** Thank the speaker for their time, give a brief and honest reason where possible, and encourage resubmission in future if there is a realistic path to acceptance.

When there are more strong proposals than available slots in a given month, the usual preferred option is to schedule the surplus talk to a future meetup date (with the speaker's agreement) rather than leaving a proposal without a response.

### 13. Review timeline

Our meetups are often held on the third Saturday of each month. To give speakers enough time to prepare and, where relevant, to submit slides, proposals should ideally be reviewed and decided at least two to three weeks before the meetup date. If the review team is unavailable and a tight timeline would compromise the review, it is better to carry a proposal forward to the next date than to rush a decision or leave a speaker waiting.

### 14. Confidentiality

Internal reviewer discussions about proposals should remain within the review team. Our review process takes place partly via GitHub comments, which are publicly visible. Keep this in mind when writing feedback there, and ensure that all comments are constructive and respectful.

### 15. Help grow a diverse programme, over time

This is less about what we do for each incoming proposal and more about what we do over the course of our involvement with the Python community. When the opportunity arises naturally, whether at meetups, online, or with colleagues, invite women, non-binary folks, and underrepresented groups to consider submitting a proposal. Encourage people with expertise in Python internals, packaging, DevOps, testing, performance, and other under-represented technical areas to put in a talk.

Our progress here is gradual and cumulative. We already face a diversity challenge in open source and in Python, and we do not want our curation to inadvertently exacerbate it. Every reviewer contributes simply by keeping this goal in mind.

---

**Courtesy**: Agriya Khetarpal

**Inspired by**:
- [SciPy US conference reviewer guidelines](https://scipy-conference.readthedocs.io/en/latest/manual/program/reviewer_guidelines.html)
- [How to be a SciPy reviewer](https://medium.com/@lorenaabarba/how-to-be-a-scipy-reviewer-d171e9947119), Lorena A. Barba
- [pyOpenSci generative AI policy](https://www.pyopensci.org/software-peer-review/our-process/generative-ai-policy.html)

Happy reviewing!
